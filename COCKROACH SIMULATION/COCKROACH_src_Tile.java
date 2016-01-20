/**
 * Created by newuser on 1/9/16.
 */
public class Tile implements Comparable<Tile>{
    private int x;
    private int y;
    private int value;
    private boolean hasRoach;
    public Tile(int x, int y){
        this.x = x;
        this.y = y;
        value = 0;
        hasRoach=false;
    }
    public void incrementValue(){
        ++value;
    }
    public void setHasRoach(boolean hasRoach){
        this.hasRoach=hasRoach;
    }
    public int getValue(){
        return value;
    }
    public int getX() {
        return x;
    }
    public int getY() {
        return y;
    }

    @Override
    public int compareTo(Tile tile) {
        if(tile.getX()!=x&& tile.getY()!=y){
            return -1;
        }
        return 0;
    }
}
