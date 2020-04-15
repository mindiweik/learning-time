#!/bin/python3

from turtle import *
from random import randint

speed(0)
penup()
goto(-140, 140)

for step in range (15):
  write(step, align='center')
  right(90)
  for num in range(8):
    penup()
    forward(10)
    pendown()
    forward(10)
  penup()
  backward(160)
  left(90)
  forward(20)

def turtle_turn(spindir, turtname):
  if (spindir>0):
    for turn in range(5):
      turtname.right(72)
  else:
    for turn in range(5):
      turtname.left(72)

ada = Turtle()
ada.color('red')
ada.shape('turtle')

ada.penup()
ada.goto(-160, 120)
ada.pendown()
turtle_turn(1, ada)

bob = Turtle()
bob.color('blue')
bob.shape('turtle')

bob.penup()
bob.goto(-160, 90)
bob.pendown()
turtle_turn(0, bob)

cot = Turtle()
cot.color('orange')
cot.shape('turtle')

cot.penup()
cot.goto(-160, 60)
cot.pendown()
turtle_turn(1, cot)

dat = Turtle()
dat.color('purple')
dat.shape('turtle')

dat.penup()
dat.goto(-160, 30)
dat.pendown()
turtle_turn(0, dat)

eor = Turtle()
eor.color('turquoise')
eor.shape('turtle')

eor.penup()
eor.goto(-160, 0)
eor.pendown()
turtle_turn(1, eor)

for turn in range(100):
  ada.forward(randint(1,5))
  bob.forward(randint(1,5))
  cot.forward(randint(1,5))
  dat.forward(randint(1,5))
  eor.forward(randint(1,5))