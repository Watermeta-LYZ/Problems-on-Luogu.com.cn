@echo off    
for /R %%f in (*.obj) do (
    echo deleted %%f
    del "%%f"
)
pause