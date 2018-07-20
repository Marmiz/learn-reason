open Jest;

describe("factorial", () => {
  open Expect;

  test("10", () => {
    expect(Factorial.factorial(5)) |> toBe(120)
  })
})
