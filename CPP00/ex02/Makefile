YELLOW			= \033[1;33m
GREEN			= \033[1;32m

TARGET = philo

PROJDIR = $(realpath $(CURDIR))
SOURCEDIR := $(PROJDIR)
BUILDDIR := $(PROJDIR)/Build
INCLUDESDIR := $(PROJDIR)/includes

DIRS		= srcs
SOURCEDIRS	= $(foreach dir, $(DIRS), $(addprefix $(SOURCEDIR)/, $(dir)))
TARGETDIRS	= $(foreach dir, $(DIRS), $(addprefix $(BUILDDIR)/, $(dir)))

INCLUDES = $(foreach dir, $(INCLUDESDIR), $(addprefix -I, $(dir)))

VPATH = $(SOURCEDIRS)

SOURCES = $(foreach dir,$(SOURCEDIRS),$(wildcard $(dir)/*.cpp))

OBJS := $(subst $(SOURCEDIR),$(BUILDDIR),$(SOURCES:.cpp=.o))

DEPS = $(OBJS:.o=.d)

CC				= c++ -Wall -Wextra -Werror -std=c++98
RM				= rm -rf
RMDIR			= rm -rf
MKDIR			= mkdir -p
SEP				=/
ERRIGNORE 		= 2>/dev/null
NAME			= philo

PSEP = $(strip $(SEP))

define generateRules
$(1)/%.o: %.cpp
	@echo Building $$@
	@$(CC) -c $$(INCLUDES) -o $$(subst /,$$(PSEP),$$@) $$(subst /,$$(PSEP),$$<)
endef

all: directories $(TARGET)

$(TARGET): $(OBJS)
	@echo Linking $@
	@$(CC) $(OBJS) -o $(TARGET)

-include $(DEPS)

# Generate rules
$(foreach targetdir, $(TARGETDIRS), $(eval $(call generateRules, $(targetdir))))

directories:
	@$(MKDIR) $(subst /,$(PSEP),$(TARGETDIRS)) $(ERRIGNORE)

# Remove all objects, dependencies and executable files generated during the build
clean:
	@$(RMDIR) $(subst /,$(PSEP), $(PROJDIR)/Build) $(ERRIGNORE)
	@echo Cleaning done !

fclean:			clean
				@$(RM) $(TARGET) $(ERRIGNORE)

re:				fclean all

.PHONY:			all clean fclean re directories
