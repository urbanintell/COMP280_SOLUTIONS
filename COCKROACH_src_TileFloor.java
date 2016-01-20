/**
 * Created by newuser on 1/9/16.
 */

public class TileFloor {
    private Tile[][] floor;
    Tile roach;
    private int rows;
    private int columns;

    public TileFloor(int rows, int columns){
        this.rows = rows;
        this.columns=columns;
        floor = new Tile[rows][columns];
        initCells();
    }

    private void initCells(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                 floor[i][j] = new Tile(i,j);
            }
        }
    }
    public void hasRoach(int x, int y){

        roach = floor[x][y];
        floor[x][y].setHasRoach(true);
        floor[x][y].incrementValue();
    }
    public Tile getRoach(){
        return roach;
    }
    public boolean checkBounds(int x_position, int y_position){

        if(x_position<0||y_position<0){
            return false;
        }
        if(x_position>=rows||y_position>=columns){
            return false;
        }
        return true;
    }
    public void display(){
        for(int i=0;i<rows;i++){
            for(int j=0;j<columns;j++){
                Tile tile = floor[i][j];
                System.out.print(tile.getValue()+"\t");
            }
            System.out.println();
        }
    }

    public int getNumberOfTiles(){
        return rows*columns;
    }

}
