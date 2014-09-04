import turtle

def draw_square():
    window = turtle.Screen()
    window.bgcolor("red")

    brad = turtle.Turtle()
    brad.shape("turtle")
    brad.color("yellow")
    brad.speed(10)
    
    while True:
        for x in range(0,4):
            print (x)
            brad.forward(100)
            brad.right(90)
            #window.exitonclick()
        brad.right(3)
        

draw_square()

