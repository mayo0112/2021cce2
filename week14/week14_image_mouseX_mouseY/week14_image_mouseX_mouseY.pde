PImage img;
void setup(){
  size(600,400);
  img=loadImage("image.png");
}
void draw(){
  image(img,mouseX,mouseY);
}
