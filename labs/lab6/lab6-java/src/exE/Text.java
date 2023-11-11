package exE;

import java.awt.*;

public class Text implements Component{
    protected int x;
    protected int y;
    String text;

    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    @Override
    public void draw(Graphics g) {
        g.drawString(text, x ,y);
    }
}
