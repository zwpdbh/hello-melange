[@react.component]
let make = () => {
  let (counter, setCounter) = React.useState(() => 0);

  <div style={ReactDOM.Style.make(~fontSize="1.0em", ~gap="0.5em", ())}>
    <h1> {React.string("Example02 -- Counter")} </h1>
    <button onClick={_evt => setCounter(v => v - 1)}>
      {React.string("-")}
    </button>
    {counter |> Int.to_string |> React.string}
    <button onClick={_evt => setCounter(v => v + 1)}>
      {React.string("+")}
    </button>
  </div>;
};
