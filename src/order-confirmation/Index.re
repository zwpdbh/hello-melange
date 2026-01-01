module App = {
  let items: Order.t = [|Sandwich, Burger, Sandwich|];

  [@react.component]
  let make = () =>
    <div>
      <h1> {React.string("Example04 -- Order confirmation")} </h1>
      <Order items />
    </div>;
};
