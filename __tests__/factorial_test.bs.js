// Generated by BUCKLESCRIPT VERSION 4.0.0, PLEASE EDIT WITH CARE
'use strict';

var Jest = require("@glennsl/bs-jest/src/jest.js");
var Factorial$BasicFunctionReason = require("../src/Factorial.bs.js");

describe("factorial", (function () {
        return Jest.test("10", (function () {
                      return Jest.Expect[/* toBe */2](120, Jest.Expect[/* expect */0](Factorial$BasicFunctionReason.factorial(5)));
                    }));
      }));

/*  Not a pure module */
