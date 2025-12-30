type t = array(Item.t);

[@react.component]
let make = (~items: t) => {
  let total =
    items
    |> Js.Array.reduce(~init=0., ~f=(acc, order) =>
         acc +. Item.toPrice(order)
       );

  <table>
    <tbody>
      {items |> Js.Array.map(~f=item => <Item item />) |> React.array}
      <tr>
        <td> {React.string("Total")} </td>
        <td> {total |> Js.Float.toFixed(~digits=2) |> React.string} </td>
      </tr>
    </tbody>
  </table>;
};
