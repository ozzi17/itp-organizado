struct Pixel {
    int r, g, b;
};

class Image{
    int width, height;
    Pixel *data;
public:
    Image(int w, int h){
        width = w;
        height  = h;
        data = new Pixel[w * h];
    }

    Image(const Image &img){
        width = img.width;
        height = img.height;
        data = img.data;
    }

    Pixel get(int lin, int col){
        return data[lin * width + col];
    }

    void set(int lin, int col, Pixel p){
        data[lin * ]
    }
};

int main(){
    Image original(9, 9);
    Image cinza = original;
    
    Pixel p = original.get(3, 4);
    return 0;
}