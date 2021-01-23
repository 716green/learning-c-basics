# learning-c-basics

## Compiler

MinGW CCC

### notes

Create a launch.json file with [shift] + [ctrl] + [B]

Add ```"program": "${workspaceFolder}/main.exe",```

to launch.json to define starting point

#### compile

```bash
# gcc.exe (MinGW)
[shift] + [ctrl] + [B]
```

#### run

```bash
./main.exe
```

> launch.json

#### launch.json

<pre>
{
  // Use IntelliSense to learn about possible attributes.
  // Hover to view descriptions of existing attributes.
  // For more information, visit: https://go.microsoft.com/fwlink/?linkid=830387
  "version": "0.2.0",
  "configurations": [
    {
      "name": "(Windows) Launch",
      "type": "cppvsdbg",
      "request": "launch",
      "program": "${workspaceFolder}/main.exe",
      "args": [],
      "stopAtEntry": false,
      "cwd": "${workspaceFolder}",
      "environment": [],
      "externalConsole": false
    }
  ]
}
</pre>
