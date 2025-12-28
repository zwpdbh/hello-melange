/* Demo01.re - Demo page component */

let style =
  ReactDOM.Style.make(~fontSize="1.5em", ~display="flex", ~gap="0.5em", ());

[@react.component]
let make = () => {
  <div>
    <h1> {React.string("Demo 01 - Speech Synthesis")} </h1>
    {["Hello " ++ World.name ++ "!", "This is ReasonReact with routing!"]
     |> List.map(text =>
          <div key=text style>
            {React.string(text)}
            <button
              onClick={_ => text |> Speech.makeUtterance |> Speech.speak}>
              {React.string("speak")}
            </button>
          </div>
        )
     |> Array.of_list
     |> React.array}
  </div>;
};