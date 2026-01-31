import time
import pygame

BLACK = pygame.Color(0,0,0)
WHITE = pygame.Color(255,255,255)

pygame.init()
screen = pygame.display.set_mode((800, 600))

pygame.display.set_caption("Teste Pygame")

position_x = 0

position_y = 0

velocity_x = 200

velocity_y = 1

square = pygame.Rect(20, 230, 20, 20)
right_pad = pygame.Rect(0, 240, 20, 60)
left_pad = pygame.Rect(780, 240, 20, 60)
top = pygame.Rect(0, -1 , 800, 1)
bottom = pygame.Rect(0, 601, 800, 1)

clock = pygame.time.Clock()

pads = [right_pad, left_pad]
border = [top, bottom]


ti = time.time()

pygame.mixer.music.load("musica.mp3")
pygame.mixer.music.play()

running = True

while running:
    tf = time.time()

    delta = (tf - ti)

    ti = tf
    for event in pygame.event.get():

        if event.type == pygame.QUIT:
            running = False

    position_x += velocity_x * delta
    
    position_y += velocity_y

    screen.fill((BLACK))

    square.move_ip(velocity_x * delta, 0)

    if square.collidelist(pads) >=0:
        velocity_x = -velocity_x
    if square.collidelist(border) >=0:
        velocity_y = -velocity_y
    
    
    pygame.draw.rect(screen, WHITE, square)
    
    

    for pad in pads:
        pygame.draw.rect(screen, WHITE, pad)
    
    for bordr in border:
        pygame.draw.rect(screen, WHITE, bordr)
    
    pygame.display.flip()

pygame.mixer.music.stop()
pygame.quit()