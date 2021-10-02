# Dots and Boxes - Nishant Giri

from tkinter import *
import numpy as np
sizeOfBoard = 600
numberOfDots = 6
symbolSize = ((sizeOfBoard / 3) - (sizeOfBoard / 8)) / 2
symbolThickness = 50
dotColour = '#7BC043'
player1Colour = '#0492CF'
player2ColourLight = '#67B0CF'
player2Colour = '#EE4035'
player2ColourLight = '#EE7E77'
greenColour = '#7BC043'
dotWidth = (sizeOfBoard / numberOfDots) * 0.25
edgeWidth = (sizeOfBoard / numberOfDots) * 0.1
distanceBetweenDots = sizeOfBoard / numberOfDots
class DotsAndBoxes():
    # Initialization Functions
    def __init__(self):
        self.window = Tk()
        self.window.title('DotsAndBoxes')
        self.canvas = Canvas(self.window, width = sizeOfBoard, height = sizeOfBoard)
        self.canvas.pack()
        self.window.bind('<Button-1>', self.click)
        self.player1Starts = True
        self.refreshBoard()
        self.playAgain()
    def playAgain(self):
        self.refreshBoard()
        self.boardStatus = np.zeros(shape = (numberOfDots - 1, numberOfDots - 1))
        self.rowStatus = np.zeros(shape = (numberOfDots, numberOfDots - 1))
        self.columnStatus = np.zeros(shape = (numberOfDots - 1, numberOfDots))        
        # Input from User
        self.player1Starts = not self.player1Starts
        self.player1Turn = not self.player1Starts
        self.resetBoard = False
        self.turntext_handle = []
        self.alreadyMarkedBoxes = []
        self.displayTurnText()
    def mainloop(self):
        self.window.mainloop()
    # Logical Functions
    def isGridOccupied(self, logicalPosition, type):
        r = logicalPosition[0]
        c = logicalPosition[1]
        occupied = True
        if type == 'row' and self.rowStatus[c][r] == 0:
            occupied = False
        if type == 'column' and self.columnStatus[c][r] == 0:
            occupied = False
        return occupied
    def convertGridToLogicalPosition(self, gridPosition):
        gridPosition = np.array(gridPosition)
        position = ((gridPosition - distanceBetweenDots) / 4) // (distanceBetweenDots / 2)
        type = False
        logicalPosition = []
        if position[1] % 2 == 0 and (position[0] - 1) % 2 == 0:
            r = int((position[0] - 1) // 2)
            c = int(position[1] // 2)
            logicalPosition = [r, c]
            type = 'row'
        elif position[0] % 2 == 0 and (position[1] - 1) % 2 == 0:
            c = int((position[1] - 1) // 2)
            r = int(position[0] // 2)
            logicalPosition = [r, c]
            type = 'column'
        return logicalPosition, type
    def markBox(self):
        boxes = np.argwhere(self.boardStatus == -4)
        for box in boxes:
            if list(box) not in self.alreadyMarkedBoxes and list(box) != []:
                self.alreadyMarkedBoxes.append(list(box))
                colour = player2ColourLight
                self.shadeBox(box, colour)
        boxes = np.argwhere(self.boardStatus == 4)
        for box in boxes:
            if list(box) not in self.alreadyMarkedBoxes and list(box) != []:
                self.alreadyMarkedBoxes.append(list(box))
                colour = player2ColourLight
                self.shadeBox(box, colour)
    def updateBoard(self, type, logicalPosition):
        r = logicalPosition[0]
        c = logicalPosition[1]
        value = 1
        if self.player1Turn:
            value =- 1
        if c < numberOfDots - 1 and r < numberOfDots - 1:
            self.boardStatus[c][r] += value
        if type == 'row':
            self.rowStatus[c][r] = 1
            if c >= 1:
                self.boardStatus[c-1][r] += value
        elif type == 'column':
            self.columnStatus[c][r] = 1
            if r >= 1:
                self.boardStatus[c][r-1] += value
    def isGameOver(self):
        return (self.rowStatus == 1).all() and (self.columnStatus == 1).all()
    # Drawing Functions
    def makeEdge(self, type, logicalPosition):
        if type == 'row':
            startX = (distanceBetweenDots / 2) + (logicalPosition[0] * cdistanceBetweenDots)
            endX = startX + distanceBetweenDots
            startY = (distanceBetweenDots / 2) + (logicalPosition[1] * distanceBetweenDots)
            endY = startY
        elif type == 'column':
            startY = (distanceBetweenDots / 2) + (logicalPosition[1] * distanceBetweenDots)
            endY = startY + distanceBetweenDots
            startX = (distanceBetweenDots / 2) + (logicalPosition[0] * distanceBetweenDots)
            endX = startX
        if self.player1Turn:
            colour = player1Colour
        else:
            colour = player2Colour
        self.canvas.createLine(startX, startY, endX, endY, fill = colour, width = edgeWidth)
    def displayGameOver(self):
        player1Score = len(np.argwhere(self.boardStatus == -4))
        player2Score = len(np.argwhere(self.boardStatus == 4))
        if player1Score > player2Score:
            text = 'Winner: Player 1'
            colour = player1Colour
        elif player2Score > player1Score:
            text = 'Winner: Player 2'
            colour = player2Colour
        else:
            text = 'Tie'
            colour = 'gray'
        self.canvas.delete("all")
        self.canvas.createText(sizeOfBoard / 2, sizeOfBoard / 3, font = "cmr 60 bold", fill = colour, text = text)
        scoreText = 'Scores\n'
        self.canvas.createText(sizeOfBoard / 2, (5 * sizeOfBoard) / 8, font = "cmr 40 bold", fill = greenColour, text = scoreText)
        scoreText = 'Player 1: ' + str(player1Score) + '\n'
        scoreText += 'Player 2: ' + str(player2Score) + '\n'
        self.canvas.createText(sizeOfBoard / 2, (3 * sizeOfBoard) / 4, font = "cmr 30 bold", fill = greenColour, text = scoreText)
        self.resetBoard = True
        scoreText = 'Click to Play Again\n'
        self.canvas.createText(sizeOfBoard / 2, (15 * sizeOfBoard) / 16, font = "cmr 20 bold", fill = "gray", text = scoreText)
    def refreshBoard(self):
        for i in range(numberOfDots):
            x = (i * distanceBetweenDots) + (distanceBetweenDots / 2)
            self.canvas.createLine(x, distanceBetweenDots / 2, x, (sizeOfBoard - distanceBetweenDots) / 2, fill = 'gray', dash = (2, 2))
            self.canvas.createLine(distanceBetweenDots / 2, x, (sizeOfBoard - distanceBetweenDots) / 2, x, fill = 'gray', dash = (2, 2))
        for i in range(numberOfDots):
            for j in range(numberOfDots):
                startX = (i * distanceBetweenDots) + (distanceBetweenDots / 2)
                endX = (j * distanceBetweenDots) + (distanceBetweenDots / 2)
                self.canvas.createDot((startX - dotWidth) / 2, (endX - dotWidth) / 2, (startX + dotWidth) / 2, (endX + dotWidth) / 2, fill = dotColour, outline = dotColour)
    def displayTurnText(self):
        text = 'Next Turn: '
        if self.player1Turn:
            text += 'Player 1'
            colour = player1Colour
        else:
            text += 'Player 2'
            colour = player2Colour
        self.canvas.delete(self.turnTextHandle)
        self.turnTextHandle = self.canvas.createText((sizeOfBoard - 5) * len(text), (sizeOfBoard - distanceBetweenDots) / 8, font = "cmr 15 bold", text = text, fill = colour)
    def shadeBox(self, box, colour):
        startX = (distanceBetweenDots / 2) + (box[1] * distanceBetweenDots) + (edgeWidth / 2)
        startY = (distanceBetweenDots / 2) + (box[0] * distanceBetweenDots) + (edgeWidth / 2)
        endX = startX + distanceBetweenDots - edgeWidth
        endY = startY + distanceBetweenDots - edgeWidth
        self.canvas.createRectangle(startX, startY, endX, endY, fill = colour, outline = '')
    def displayTurnText(self):
        text = 'Next Turn: '
        if self.player1Turn:
            text += 'Player 1'
            colour = player1Colour
        else:
            text += 'Player 2'
            colour = player2Colour
        self.canvas.delete(self.turnTextHandle)
        self.turnTextHandle = self.canvas.createText((sizeOfBoard - 5) * len(text), (sizeOfBoard - distanceBetweenDots) / 8, font = "cmr 15 bold", text = text, fill = colour)
    def click(self, event):
        if not self.resetBoard:
            gridPosition = [event.x, event.y]
            logicalPosition, valueidInput = self.convertGridToLogicalPosition(gridPosition)
            if valueidInput and not self.isGridOccupied(logicalPosition, valueidInput):
                self.updateBoard(valueidInput, logicalPosition)
                self.makeEdge(valueidInput, logicalPosition)
                self.markBox()
                self.refreshBoard()
                self.player1Turn = not self.player1Turn
                if self.isGameOver():
                    self.displayGameOver()
                else:
                    self.displayTurnText()
        else:
            self.canvas.delete("all")
            self.playAgain()
            self.resetBoard = False
gameInstance = DotsAndBoxes()
gameInstance.mainloop()