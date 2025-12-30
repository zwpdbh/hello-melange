type t =
  | Sandwich
  | Burger;

let toPrice = t =>
  switch (t) {
  | Sandwich => 10.
  | Burger => 15.
  };

let toEmoji =
  fun
  | Sandwich => {js|🥪|js}
  | Burger => {js|🍔|js};

[@react.component]
let make = (~item: t) =>
  <tr>
    <td> {item |> toEmoji |> React.string} </td>
    <td>
      {item |> toPrice |> Js.Float.toFixed(~digits=2) |> React.string}
    </td>
  </tr>;
