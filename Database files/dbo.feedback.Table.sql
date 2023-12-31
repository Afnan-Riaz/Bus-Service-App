USE [bus]
GO
/****** Object:  Table [dbo].[feedback]    Script Date: 6/21/2023 2:46:55 PM ******/
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
CREATE TABLE [dbo].[feedback](
	[username] [varchar](20) NOT NULL,
	[experience] [varchar](20) NULL,
	[needs] [varchar](20) NULL,
	[pricing] [varchar](20) NULL,
	[assistance] [varchar](20) NULL,
	[feedback] [text] NULL,
	[complaint] [text] NULL,
PRIMARY KEY CLUSTERED 
(
	[username] ASC
)WITH (PAD_INDEX = OFF, STATISTICS_NORECOMPUTE = OFF, IGNORE_DUP_KEY = OFF, ALLOW_ROW_LOCKS = ON, ALLOW_PAGE_LOCKS = ON, OPTIMIZE_FOR_SEQUENTIAL_KEY = OFF) ON [PRIMARY]
) ON [PRIMARY] TEXTIMAGE_ON [PRIMARY]
GO
