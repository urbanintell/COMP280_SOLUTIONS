import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        // write your code here


        Scanner keyboard = new Scanner(System.in);
        System.out.print("Enter rows: ");
        int rows = keyboard.nextInt();
        System.out.print("Enter columns: ");
        int columns = keyboard.nextInt();

        TileFloor floor = new TileFloor(rows,columns);
        int x,y;

        System.out.println("Enter initial roach position");
        do {
            System.out.print("X = ");
            x = keyboard.nextInt();
            System.out.print("Y = ");
            y = keyboard.nextInt();
        }while(!floor.checkBounds(x,y));

        floor.hasRoach(x,y);

        Experiment experiment = new Experiment(floor);

        experiment.simulate();


    }
}
