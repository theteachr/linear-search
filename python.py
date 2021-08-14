import random


def search(key, collection):
    for i, item in enumerate(collection):
        if item == key:
            return i

    return None

def main():
    nums = [5, 7, 89, 100, 1024, 1025, 2000]
    key = 1024

    res_idx = search(key, nums)

    if res_idx is not None:
        print(f"{key} was found at index {res_idx} :D")
    else:
        print(f"{key} was not found :[")

if __name__ == '__main__':
    main()
