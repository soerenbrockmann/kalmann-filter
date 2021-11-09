import { update } from "./newMeanAndVariance";

describe("new mean and variance", () => {
  it("updates", () => {
    const result = update(10.0, 8.0, 13.0, 2.0);
    console.log(result);

    expect(result).toStrictEqual([12.4, 1.6000000000000001]);
  });
});
