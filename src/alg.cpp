// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int ll = 0;
  int rg = size - 1;
  int kl = 0;
  while (ll <= rg) {
    int mid = (ll + rg) / 2;
    if (value < arr[mid]) {
      rg = mid - 1;
    } else if (value > arr[mid]) {
      ll = mid + 1;
    } else {
      for (int i = 1; arr[mid] == arr[mid - i]; i++)
        kl++;
      for (int i = 0; arr[mid] == arr[mid + i]; i++)
        kl++;
      return kl;
    }
  }
  return 0;
}
