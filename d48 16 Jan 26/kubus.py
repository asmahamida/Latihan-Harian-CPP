import turtle

t = turtle.Turtle()
t.speed(3)

size = 100
offset = 40

for _ in range(4):
    t.forward(size)
    t.left(90)

t.penup()
t.goto(offset,offset)
t.pendown()

for _ in range(4):
    t.forward(size)
    t.left(90)

corners = [
    (0,0), (size, 0), (size, size), (0, size) 
]

for x, y in corners:
    t.penup()
    t.goto(x, y)
    t.pendown()
    t.goto(x + offset, y + offset)

turtle.done