const path = require('path');

module.exports = {
  mode: 'development',
  entry: './_build/default/src/output/src/ReactApp.js',
  output: {
    filename: 'main.js',
    path: path.resolve(__dirname, 'public'),
  },
  module: {
    rules: [
      {
        test: /\.css$/,
        use: [
          'style-loader',
          'css-loader'
        ]
      }
    ]
  },
  devServer: {
    static: {
      directory: path.join(__dirname, 'public'),
    },
    open: true,
    port: 3000,
  },
  resolve: {
    fallback: {
      // Add fallbacks for Node.js built-ins if needed
    }
  }
};