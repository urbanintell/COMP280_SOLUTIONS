import java.util.HashMap;
import java.util.Map;
import java.util.Random;

/**
 * Created by newuser on 1/9/16.
 */
public class Experiment {

    private TileFloor floor;
    private Map<Tile,Boolean> hasVisited;
    
    public Experiment(TileFloor floor){
        this.floor=floor;
        hasVisited = new HashMap<Tile,Boolean>();

    }
    public Experiment(){
        floor = new TileFloor(7,7);
        hasVisited = new HashMap<Tile,Boolean>();

    }
    public boolean visitedAllCells(){
        return hasVisited.size()==floor.getNumberOfTiles();
    }

    public void simulate(){
        int iterationLimit =0;
        Random rand = new Random();
        while(!visitedAllCells()){
//          value for decision of
            int  move = rand.nextInt(8);
            iterationLimit++;

            Tile tile = floor.getRoach();

            int x = tile.getX()+RoachMove.values()[move].getX();
            int y = tile.getY()+RoachMove.values()[move].getY();

            if(floor.checkBounds(x,y)){
                hasVisited.put(tile,true);
                floor.getRoach().setHasRoach(false);
                floor.hasRoach(x,y);

            }

            if (iterationLimit==500000){
                System.err.println("Iteration limit met");
                break;
            }
        }
        System.out.println("Number of legal moves: "+legalMoves());
        floor.display();

    }

    public int legalMoves(){
        int sum=0;
        for(Tile m : hasVisited.keySet()){
            sum+= m.getValue();
        }
        return sum;
    }
}
