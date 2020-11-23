# Installation

drupalcol theme uses [Webpack](https://webpack.js.org) to compile and bundle SASS and JS.

current -  nvm install 10.22.0
nvm use 10.22.0
npm install -g win-node-env

npm install
npm run dev
npm run watch


https://www.drupal.org/project/radix/issues/2980421#comment-13671563

#### Step 1
Make sure you have Node and npm installed.
You can read a guide on how to install node here: https://docs.npmjs.com/getting-started/installing-node

If you prefer to use [Yarn](https://yarnpkg.com) instead of npm, install Yarn by following the guide [here](https://yarnpkg.com/docs/install).

#### Step 2
Go to the root of drupalcol theme and run the following commands: `npm install` or `yarn install`.

#### Step 3
Update `proxy` in **webpack.mix.json**.

#### Step 4
Run the following command to compile Sass and watch for changes: `npm run watch` or `yarn watch`.
