x0, v0, t = map(float, input().split())
g = 9.8
x = v0 * t - (g * t * t) / 2
print("Расстояние, пройденное объектом за время {0}c, x(t) = {1}". format(t, abs(x)))
