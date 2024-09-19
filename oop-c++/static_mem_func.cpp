 #include <iostream>
using namespace std;
class Products
{
public:
  static int quantity;

  Products()
  {
    quantity++;
  }

  void show()
  {
    cout<<"Products Quantity : "<<quantity<<endl;
  }   

  static void list_msg()
  {
    cout<<"Here is the total counting of products"<<endl;
  }

};


int Products :: quantity=0;

int main()
{
  Products p1,p2,p3,p4,p5;
  Products::list_msg();
  p1.show();
    return 0;
}

