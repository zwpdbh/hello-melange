let convert = celsius => celsius *. 9.0 /. 5.0 +. 32.0;

let getValueFromEvent = (event): string =>
  // review: access fileds of a Js.t obejct using the ## operatior
  React.Event.Form.target(event)##value;

[@react.component]
let make = () => {
  let (celsius, setCelsius) = React.useState(() => "");

  <div>
    <h1> {React.string("Example03 -- Celsius to Fahrenheit Converter")} </h1>
    <input
      value=celsius
      onChange={evt => {
        let newCelsius = getValueFromEvent(evt);
        setCelsius(_ => newCelsius);
      }}
    />
    {React.string({js|°C =|js})}
    {(
       celsius == ""
         ? {js|?°F|js}
         : (
           switch (
             celsius
             |> float_of_string
             |> convert
             |> Js.Float.toFixed(~digits=2)
           ) {
           | exception _ => "error"
           | fahrenheit => fahrenheit ++ {js|°F|js}
           }
         )
     )
     |> React.string}
  </div>;
};
