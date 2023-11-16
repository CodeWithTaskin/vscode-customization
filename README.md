# vscode-customization
**Paste this code in setting.js in Visual Studio Code** `code`
```js
{
  "editor.fontSize": 18,
  "editor.tabSize": 2,
  "editor.wordWrap": "on",
  "editor.cursorSmoothCaretAnimation": "on",
  "editor.cursorBlinking": "expand",
  "editor.formatOnSave": true,
  "editor.formatOnPaste": true,
  "editor.formatOnType": true,
  "editor.fontFamily": "Fira Code",
  "editor.fontLigatures": true,
  "workbench.colorCustomizations": {
    "editorGroupHeader.tabsBackground": "#000000",
    "activityBar.background": "#000000",
    "activityBar.inactiveForeground": "#b1aeae",
    "sideBar.background": "#141422",
    "minimap.background": "#141422",
    "tab.activeBackground": "#000000",
    "tab.inactiveBackground": "#191846",
    "terminal.border": "#000000",
    "terminal.background": "#000000",
    "statusBar.background": "#fdfd96",
    "statusBar.foreground": "#000000",
    "scrollbarSlider.background": "#b1b1b1",
    "scrollbarSlider.hoverBackground": "#8da6ce"
  },
  "editor.tokenColorCustomizations": {
    "comments": "#95afc0"
  },
  "editor.linkedEditing": true,
  "editor.bracketPairColorization.enabled": true,
  "editor.guides.bracketPairs": true,
  "editor.guides.bracketPairsHorizontal": true,
  "editor.hover.enabled": false,
  // Live Server
  "liveServer.settings.CustomBrowser": "microsoft-edge",
  "liveServer.settings.donotShowInfoMsg": true,
  "liveServer.settings.donotVerifyTags": true,
  // Live SASS Compiler
  "liveSassCompile.settings.formats": [
    {
      "format": "compressed",
      "extensionName": ".min.css",
      "savePath": "/css"
    }
  ],
  "liveSassCompile.settings.generateMap": false,
  // VS Code Theme Customization
  "workbench.iconTheme": "material-icon-theme",
  "workbench.colorTheme": "Community Material Theme Ocean High Contrast",
  "workbench.editor.enablePreview": false,
  "terminal.integrated.defaultProfile.windows": "Git Bash",
  "terminal.integrated.fontSize": 15,
  "diffEditor.wordWrap": "on",
  "security.workspace.trust.untrustedFiles": "open",
  "files.autoSave": "afterDelay",
  "files.autoSaveDelay": 10,

  // Prettier Config
  "prettier.proseWrap": "always",
  "prettier.singleQuote": true,
  "prettier.arrowParens": "avoid",
  "editor.defaultFormatter": "esbenp.prettier-vscode",
  "[html]": {
    "editor.defaultFormatter": "vscode.html-language-features"
  },
  // Screencast Mode
  "screencastMode.onlyKeyboardShortcuts": true,
  "screencastMode.mouseIndicatorColor": "#f1c40f",
  "screencastMode.verticalOffset": 0,

  // Enable Emmet support for JSX
  "emmet.includeLanguages": {
    "javascript": "javascriptreact"
  },
  "editor.minimap.enabled": false
}


```
![Screenshort](https://github.com/CodeWithTaskin/vscode-customization/assets/105396220/1904bbb9-4ecc-4f0a-be92-0fd146a5af92)
