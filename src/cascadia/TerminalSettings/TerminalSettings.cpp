/********************************************************
 *                                                       *
 *   Copyright (C) Microsoft. All rights reserved.       *
 *                                                       *
 ********************************************************/
#include "pch.h"
#include "TerminalSettings.h"
#include <DefaultSettings.h>

namespace winrt::Microsoft::Terminal::Settings::implementation
{
    TerminalSettings::TerminalSettings() :
        _defaultForeground{ DEFAULT_FOREGROUND_WITH_ALPHA },
        _defaultBackground{ DEFAULT_BACKGROUND_WITH_ALPHA },
        _colorTable{},
        _historySize{ DEFAULT_HISTORY_SIZE },
        _initialRows{ 30 },
        _initialCols{ 80 },
        _snapOnInput{ true },
        _useAcrylic{ false },
        _tintOpacity{ 0.5 },
        _padding{ DEFAULT_PADDING },
        _fontFace{ DEFAULT_FONT_FACE },
        _fontSize{ DEFAULT_FONT_SIZE },
        _keyBindings{ nullptr }
    {

    }

    uint32_t TerminalSettings::DefaultForeground()
    {
        return _defaultForeground;
    }

    void TerminalSettings::DefaultForeground(uint32_t value)
    {
        _defaultForeground = value;
    }

    uint32_t TerminalSettings::DefaultBackground()
    {
        return _defaultBackground;
    }

    void TerminalSettings::DefaultBackground(uint32_t value)
    {
        _defaultBackground = value;
    }

    uint32_t TerminalSettings::GetColorTableEntry(int32_t index) const
    {
        return _colorTable[index];
    }

    void TerminalSettings::SetColorTableEntry(int32_t index, uint32_t value)
    {
        THROW_HR_IF(E_INVALIDARG, index > _colorTable.size());
        _colorTable[index] = value;
    }

    int32_t TerminalSettings::HistorySize()
    {
        return _historySize;
    }

    void TerminalSettings::HistorySize(int32_t value)
    {
        _historySize = value;
    }

    int32_t TerminalSettings::InitialRows()
    {
        return _initialRows;
    }

    void TerminalSettings::InitialRows(int32_t value)
    {
        _initialRows = value;
    }

    int32_t TerminalSettings::InitialCols()
    {
        return _initialCols;
    }

    void TerminalSettings::InitialCols(int32_t value)
    {
        _initialCols = value;
    }

    bool TerminalSettings::SnapOnInput()
    {
        return _snapOnInput;
    }

    void TerminalSettings::SnapOnInput(bool value)
    {
        _snapOnInput = value;
    }

    bool TerminalSettings::UseAcrylic()
    {
        return _useAcrylic;
    }

    void TerminalSettings::UseAcrylic(bool value)
    {
        _useAcrylic = value;
    }

    double TerminalSettings::TintOpacity()
    {
        return _tintOpacity;
    }

    void TerminalSettings::TintOpacity(double value)
    {
        _tintOpacity = value;
    }

    hstring TerminalSettings::Padding()
    {
        return _padding;
    }

    void TerminalSettings::Padding(hstring value)
    {
        _padding = value;
    }

    hstring TerminalSettings::FontFace()
    {
        return _fontFace;
    }

    void TerminalSettings::FontFace(hstring const& value)
    {
        _fontFace = value;
    }

    int32_t TerminalSettings::FontSize()
    {
        return _fontSize;
    }

    void TerminalSettings::FontSize(int32_t value)
    {
        _fontSize = value;
    }

    Settings::IKeyBindings TerminalSettings::KeyBindings()
    {
        return _keyBindings;
    }

    void TerminalSettings::KeyBindings(Settings::IKeyBindings const& value)
    {
        _keyBindings = value;
    }

    hstring TerminalSettings::Commandline()
    {
        return _commandline;
    }

    void TerminalSettings::Commandline(hstring const& value)
    {
        _commandline = value;
    }

    hstring TerminalSettings::StartingDirectory()
    {
        return _startingDir;
    }

    void TerminalSettings::StartingDirectory(hstring const& value)
    {
        _startingDir = value;
    }

    hstring TerminalSettings::EnvironmentVariables()
    {
        return _envVars;
    }

    void TerminalSettings::EnvironmentVariables(hstring const& value)
    {
        _envVars = value;
    }

}
