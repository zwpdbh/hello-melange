/* Router.re - Routing configuration */
type routeProps;
[@mel.module "react-router-dom"] external browserRouter: 'a => React.element = "BrowserRouter";
[@mel.module "react-router-dom"] external routes: 'a => React.element = "Routes";
[@mel.module "react-router-dom"] external route: routeProps => React.element = "Route";
[@mel.obj] external routeProps: (~path: string, ~element: React.element) => routeProps = "";

[@react.component]
let make = () => {
  let homeElement = <div>
    <h1> {React.string("Home")} </h1>
    <a href="/demo/01"> {React.string("Go to Demo 01")} </a>
  </div>;

  browserRouter(
    routes([
      route(routeProps(~path="/demo/01", ~element=<Demo01.make />)),
      route(routeProps(~path="/", ~element=homeElement)),
    ])
  );
};