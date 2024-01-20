public class Main {
    public static void main(String[] args) {
        /*
        int[][] array2D = {
                {1, 2, 3}, {4, 5, 6}, {7, 8, 9}
        };

        */

        int[][] array2D;
        array2D = new int[4][];
        array2D[0] = new int[3];
        array2D[1] = new int[4];
        array2D[2] = new int[3];
        array2D[3] = new int[5];
        array2D = new int[4][3];
        int number = 500;
        System.out.println(array2D.length);
        System.out.println(array2D[1].length);
        System.out.println(array2D[1][1]);

        for (int i = 0 ; i < array2D.length ; i++) {
            for (int j = 0; j < array2D.length ; j++) {
                array2D[i][j] = number++;
            }
        }


        for (int i = 0 ; i < array2D.length ; i++) {
            for (int j = 0; j < array2D.length ; j++) {
                System.out.print(array2D[i][j] + " ");
            }
        }
        System.out.println();
        System.out.println("----------------------");
        for (int[] i1 : array2D){
            for (int j : i1){
                System.out.print(j + " ");
            }
        }
        System.out.println();
    }
}
