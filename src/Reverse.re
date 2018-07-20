let reverse = (s: string) : string => {
  let l: int = String.length(s);
  let x: string = String.init(l, i => s.[l - (i + 1)]);
  x;
};
