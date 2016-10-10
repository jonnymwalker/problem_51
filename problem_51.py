def get_sorted_digits(x):
    return sorted(list(str(x)))


def calc_permuted_multiples():
    x = [0 for i in range(6)]
    for n in range(1, 2000000000):
        for i in range(6):
            x[i] = get_sorted_digits(n * (i + 1))

            if i > 0 and x[i] != x[i - 1]:
                break
            elif i == 5:
                print(str(n))
                return


if __name__ == "__main__":
    calc_permuted_multiples()
