def func(k, p, arr, f, n):
    if k == n:
        return
    else:
        temp = [arr[k]] + p
        f.append(temp)
        func(k+1, temp, arr, f, n)
        func(k+1, p, arr, f, n)


def subsets(arr):
    f = []
    n = len(arr)

    func(0, [], arr, f, n)
    print(f)


print(subsets([1, 2, 3, 4]))
