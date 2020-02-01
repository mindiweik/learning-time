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

def turtle_turn(x):
  if x == 0:
    for turn in range(5):
      ada.right(72)
  elif x == 1:
    for turn in range(5):
      bob.left(72)
  elif x == 2:
    for turn in range(5):
      cot.right(72)
  elif x == 3:
    for turn in range(5):
      dat.left(72)
  else:
    for turn in range(5):
      eor.right(72)

ada = Turtle()
ada.color('red')
ada.shape('turtle')

ada.penup()
ada.goto(-160, 120)
ada.pendown()
turtle_turn(0)

bob = Turtle()
bob.color('blue')
bob.shape('turtle')

bob.penup()
bob.goto(-160, 90)
bob.pendown()
turtle_turn(1)

cot = Turtle()
cot.color('orange')
cot.shape('turtle')

cot.penup()
cot.goto(-160, 60)
cot.pendown()
turtle_turn(2)

dat = Turtle()
dat.color('purple')
dat.shape('turtle')

dat.penup()
dat.goto(-160, 30)
dat.pendown()
turtle_turn(3)

eor = Turtle()
eor.color('turquoise')
eor.shape('turtle')

eor.penup()
eor.goto(-160, 0)
eor.pendown()
turtle_turn(4)

for turn in range(100):
  ada.forward(randint(1,5))
  bob.forward(randint(1,5))
  cot.forward(randint(1,5))
  dat.forward(randint(1,5))
  eor.forward(randint(1,5))