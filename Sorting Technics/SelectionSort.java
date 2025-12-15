// Selection Sort - select an element and swap

class SelectionSort {
    public static void main(String[] args) {
        int[] arr = { 5, 3, 6, 2, 1, 4 };
        selectionSort(arr);
        for (int ele : arr) {
            System.out.print(ele + " ");
        }
    }

    public static void selectionSort(int[] arr) {
        int arrLen = arr.length - 1;
        for (int i = 0; i < arrLen - 1; i++) {
            int min = i;
            for (int j = i; j < arrLen; j++) {
                if (arr[min] > arr[j]) {
                    min = j;
                }
            }
            // swap
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
}