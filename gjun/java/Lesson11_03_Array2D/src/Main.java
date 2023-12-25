public class Main {
    public static void main(String[] args) {
        int[][] array2D = {
                {1, 2, 3}, {4, 5, 6}, {7, 8, 9}
        };
        System.out.println(array2D.length);
        System.out.println(array2D[1].length);
        System.out.println(array2D[1][1]);

        for (int i = 0; i < array2D.length; i++){
            for (int j = 0; j < array2D[i].length; j++){
                System.out.print(array2D[i][j]+" ");
            }
            System.out.println();
        }
    }
}
