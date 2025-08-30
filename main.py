import machine, utime

pins = []

for i in range(5):
  pins.append(machine.Pin(i, Pin.OUT))
  pins[i].value(1)
  utime.sleep_ms(250)

for i in range(4, -1, -1):
  pins[i].value(0)
  utime.sleep_ms(250)
