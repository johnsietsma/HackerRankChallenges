cmake_minimum_required(VERSION 3.4)

set(PROJECT_NAME HackerRankChallenges)
project(${PROJECT_NAME})


IF(APPLE)
    SET(STD_C11 "-std=c++11 -stdlib=libc++")
    SET(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LIBRARY "libc++")
    set(CMAKE_XCODE_ATTRIBUTE_CLANG_CXX_LANGUAGE_STANDARD "c++11")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${GCC_CHAR_IS_UNSIGNED_CHAR} ${STD_C11}")
ENDIF()


#add_subdirectory(ext/lest)
include_directories( "ext/lest/include/lest" )

file(GLOB_RECURSE CHALLENGE_SOURCES "src/*.cpp")

foreach( ChallengeSourceFile ${CHALLENGE_SOURCES} )
    get_filename_component( ChallengeName ${ChallengeSourceFile} NAME_WE )
    add_executable( ${ChallengeName} ${ChallengeSourceFile} )
    
    file(GLOB_RECURSE CHALLENGE_INPUTS "input/${ChallengeName}*.txt")
    foreach( ChallengeInput ${CHALLENGE_INPUTS} )
        add_custom_command( 
            TARGET ${ChallengeName}
            POST_BUILD
            COMMAND $<TARGET_FILE:${ChallengeName}> < ${ChallengeInput}
         )
    endforeach()
    
endforeach()