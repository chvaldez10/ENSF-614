package exE;
import java.awt.*;

public class BorderDecorator extends Decorator{
    public BorderDecorator(Component cmp,  int x, int y, int width, int height){
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {
        cmp.draw(g); // Draw the original component

        // Now draw a dashed border
        Graphics2D g2d = (Graphics2D) g.create();
        float[] dash = { 10.0f };
        BasicStroke dashedStroke = new BasicStroke(1.0f, BasicStroke.CAP_BUTT,
                BasicStroke.JOIN_MITER, 10.0f, dash, 0.0f);
        g2d.setStroke(dashedStroke);
        g2d.drawRect(x, y, width, height);
        g2d.dispose();
    }
}
