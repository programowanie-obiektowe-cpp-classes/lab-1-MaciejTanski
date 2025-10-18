class Wektor2D
{
  public:

        Wektor2D(double x, double y){
        x_ = x; y_=y;  
      }

      Wektor2D() { 
        x_ = 0.; y_ = 0.;
      }

      void setX(double x) { x_ = x; }
      void setY(double y) { y_ = y; }

      double getX() const { return x_; }
      double getY() const { return y_; }  

      Wektor2D operator+( const Wektor2D& w2)
      {
          return Wektor2D{x_ + w2.x_, y_ + w2.y_};
      }

      double operator*( const Wektor2D& w2)
      {
          return x_ * w2.x_ + y_ * w2.y_;
      }

  private:
      double x_,y_;

};



