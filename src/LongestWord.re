let longestWord = (s: string) : int => {
  let splitted = Js.String.split(" ", s);
  let maxL = ref(-1);

  Array.iter(
    word =>
      if (String.length(word) > maxL^) {
        maxL := String.length(word);
      },
    splitted,
  );
  maxL^;
};
