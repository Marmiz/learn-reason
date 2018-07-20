open Jest;

describe("longest word in a string", () => {
  open Expect;

  test("short", () =>
    expect(LongestWord.longestWord("The quick brown fox jumped over the lazy dog")) |> toBe(6)
    );
  test("long", () =>
    expect(LongestWord.longestWord("What if we try a super-long word such as otorhinolaryngology")) |> toBe(19));
});
