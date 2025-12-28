[@react.component]
let make = () => {
  let (counter, setCounter) = React.useState(() => 0);

  <div>
    <h1> {React.string("Example02 -- Counter")} </h1>
    <button onClick={_evt => setCounter(v => v - 1)}>
      {React.string("-")}
    </button>
    {React.string(Int.to_string(counter))}
    <button onClick={_evt => setCounter(v => v + 1)}>
      {React.string("+")}
    </button>
  </div>;
};
