const sayHello = require('../src/hello');

describe("Hello", function () {

  it("says hello", function () {
    expect(sayHello("world")).toBe("Hello, world!");
  });

});