x0, v0, t = map(int, input().split())
g = 9.8
x = abs(x0 + v0 * t - (g * t * t) / 2)
print("Расстояние, пройденное объектом за время {0}c, x(t) = {1}". format(t, x))
