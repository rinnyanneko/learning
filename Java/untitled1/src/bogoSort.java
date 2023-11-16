public class bogoSort {

    void BogoSort(int[] a)
    {
        long time1 = System.currentTimeMillis();
        int run = 0;
        // if array is not sorted then shuffle the
        // array again
        while (!isSorted(a)) {
            shuffle(a);
            run++;
            System.out.println(run);
            System.out.println("Sort time: " + (System.currentTimeMillis() - time1) + " ms");
        }
    }

    // To generate permutation of the array
    void shuffle(int[] a)
    {
        // Math.random() returns a double positive
        // value, greater than or equal to 0.0 and
        // less than 1.0.
        for (int i = 0; i < a.length; i++)
            swap(a, i, (int)(Math.random() * i));
    }

    // Swapping 2 elements
    void swap(int[] a, int i, int j)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    // To check if array is sorted or not
    boolean isSorted(int[] a)
    {
        for (int i = 1; i < a.length; i++)
            if (a[i] < a[i - 1])
                return false;
        return true;
    }

    // Prints the array
    void printArray(int[] arr)
    {
        for (int i = 0; i < arr.length; i++)
            System.out.print(arr[i] + " ");
        System.out.println();
    }

    public static void main(String[] args)
    {
        // Enter array to be sorted here
        long time1 = System.currentTimeMillis();
        int[] a = { 3, 2, 5, 1, 0, 4 , 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
        bogoSort ob = new bogoSort();

        ob.BogoSort(a);

        System.out.print("Sorted array: ");
        ob.printArray(a);
        System.out.printf("%nTotal sort time: %d", (System.currentTimeMillis() - time1));
    }
}
