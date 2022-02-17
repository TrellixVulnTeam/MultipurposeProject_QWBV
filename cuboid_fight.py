try:
    import ujson as json
    
except (ModuleNotFoundError, ImportError):
    try:
        import simplejson as json
        
    except (ModuleNotFoundError, ImportError):
        import json
        
from tkinter import *
from getpass import getuser
        
with open("game.json", "r") as f:
    data = json.load(f)
    ldata = list(data)
    
master = Tk()
master["background"] = "#01FEAA"
master.geometry("720x480")
master.title("Fighting Cuboid")
master.resizable(False, False)

cdata, cldata = data, ldata
var = StringVar()
var2 = ""

def textbox(text):
    tdis = Text(
        master,
        width=700,
        height=2
    )
    tdis.insert(
        INSERT,
        text
    )
    tdis.configure(state="disabled")
    tdis.pack()
    
    return tdis

def selecta(i):
    global var, var2
    var.set(i)
    var2 = i
    
def reset(*args, **kwargs):
    global cdata, cldata, data, ldata, var, var2
    var.set("a")
    var2 = "Reset"
    cdata, cldata = data, ldata
    
def button(texts, tbox):
    global master
    
    select = []
    for text in texts:
        if (text != "Reset"):
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: selecta(
                    i
                )
            )
            
        else:
            temp = Button(
                master,
                text=str(text),
                command=lambda i=text: reset(
                    i
                )
            )
            
        temp.pack()
        select.append(temp)
        
    master.wait_variable(var)
    
    for item in select:
        item.destroy()
        
    tbox.destroy()
    
    return var2

class EndDummy:
    def __init__(self, a, b):
        self.a = a
        self.b = b
    
    def destroy(self):
        self.a.destroy()
        self.b.destroy()

while True:
    cldata[0] = cldata[0].replace("%(name)s", getuser().title())
    tbox = textbox(cldata[0])
    temp = button(cldata[1:] + ["Reset"], tbox)
    
    if str(temp) != "Reset":
        cdata = cdata[temp]
        cldata = list(cdata)
        
    if cdata == cldata:
        enda = textbox("`".join(cldata[0].split("`")[:~0]))
        endb = textbox(cldata[0].split("`")[~0])
        temp = button(["Reset"], EndDummy(enda, endb))