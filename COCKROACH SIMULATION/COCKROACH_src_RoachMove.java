/**
 * Created by newuser on 1/9/16.
 */
public enum RoachMove {
    ZERO(-1,1),
    ONE(0,1),
    TWO(1,1),
    THREE(1,0),
    FOUR(1,-1),
    FIVE(0,-1),
    SIX(-1,-1),
    SEVEN(-1,0);

    private  int x;
    private int y;
    RoachMove(int x, int y){
        this.x=x;
        this.y=y;
    }

    public int getX(){
        return x;
    }
    public int getY(){
        return y;
    }
}
