open Jest;

describe("Expect", () => {
  open Expect;

  test("hello", () =>
    expect(Reverse.reverse("hello")) |> toBe("olleh"));
  test("ciao", () =>
    expect(Reverse.reverse("ciao")) |> toBe("oaic"));
});
