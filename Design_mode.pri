# Config Para
CONFIG(debug, debug|release):{
        FILE_POSTFIX = D
        DIR_COMPILEMODE = Debug
}
else:CONFIG(release, debug|release):{
        FILE_POSTFIX =
        DIR_COMPILEMODE = Release
}

win32:{
        CONFIG(MinGW, MinGW|MSVC):{
                DIR_COMPILER = MinGW
                FILE_LIB_PREFIX = lib
                FILE_LIB_EXT = .a
        }
        else:CONFIG(MSVC, MinGW|MSVC):{
                DIR_COMPILER = MSVC
                FILE_LIB_PREFIX =
                FILE_LIB_EXT = .lib
        }

        DIR_PLATFORM = Win32
        FILE_DLL_PREFIX =
        FILE_DLL_EXT = .dll
}

CONFIG(USE_LIBRARY_ABN):{
        FILE_ABN_PREFIX = $${FILE_LIB_PREFIX}
        FILE_ABN_EXT = $${FILE_LIB_EXT}
}
else:{
        FILE_ABN_PREFIX = $${FILE_DLL_PREFIX}
        FILE_ABN_EXT = $${FILE_DLL_EXT}
}

DESTDIR  = $$PWD/Bin/$${DIR_PLATFORM}/$${DIR_COMPILER}/$${DIR_COMPILEMODE}

DIR_DEPEND_DEST = $$PWD/Bin/$${DIR_PLATFORM}/$${DIR_COMPILER}/$${DIR_COMPILEMODE}

